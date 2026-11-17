# Opiate for the masses

Source of [opiateforthemass.es](https://opiateforthemass.es), built with [Quarto](https://quarto.org).

## Writing

Each post is a folder: `articles/<slug>/index.qmd`, with its images and data next to it.
The folder name is the URL (`/articles/<slug>/`). Set `draft: true` until it's ready.

```yaml
---
title: "Post title"
description: "One-line teaser shown on the front page"
author: Christoph Safferling
date: 2026-11-17
categories: [R, ggplot2]
---
```

Posts tagged `R` also go to `/rss/feed.R.xml` (R-bloggers).

## Running code

Code chunks (```` ```{r} ```` / ```` ```{python} ````) run locally only. `freeze: auto` stores the
results in `_freeze/`; **commit `_freeze/`** with the post. CI never runs R or Python.

## Preview & publish

```bash
quarto preview
```

Pushing to `master` renders the site and deploys it to GitHub Pages (`.github/workflows/publish.yml`).
